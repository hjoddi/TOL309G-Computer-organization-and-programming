import pandas as pd
import re
import numpy as np
from mpl_toolkits.mplot3d import Axes3D  
# Axes3D import has side effects, it enables using projection='3d' in add_subplot
import matplotlib.pyplot as plt
import random

# Create DF from txt files.
df_mmu = pd.read_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\mmu_mr_3_01.txt", delimiter=",")
df_ls = pd.read_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\ls_mr_3_01.txt")
df_parameters = pd.read_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\ParametersOutput.txt")
#df = pd.read_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\MmulijkOutput", sep='\t')


# Drop rows that are in the way.
#df_ls = df_ls[df_ls.index % 2 == 0]
#df_ls = df_ls[df_ls.index % 2 != 0]
#df = df[df.index % 2 != 0]

# Drop columns
#df_mmu = df_mmu.drop(df_mmu.columns[[0]], axis = 1)
#df_ls = df_ls.drop(df_ls.columns[[0, 1]], axis = 1)
#df_mmu = df_mmu.drop(df_mmu.columns[[0]], axis = 1)
#df_ls = df_ls.drop(df_ls.columns[[0]], axis = 1)

# Create final DF
df = pd.concat([df_parameters, df_mmu, df_ls], axis=1)
df.columns = ['s', 'b', 'E', 'mmulikj miss ratio', 'ls miss ratio']

# Drop %
#df_mmu.columns = ['mr']
#df_mmu['mr'] = df_mmu['mr'].str.rstrip('%').astype('float') / 100
#df_mmu.columns = ['mr']
#df_mmu['mr'] = df_mmu['mr'].str.rstrip('%').astype('float') / 100

# Save new DF.
#df_mmu.to_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\mmu_mr_3_01.txt", 
#index=None, sep='\t', mode='a')
#df_ls.to_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\ls_mr_3_01.txt",
# index=None, sep='\t', mode='a')
df.to_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\complete_df_mr_01.txt",
 sep='\t', mode='a')
#df.to_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\complete_df_shortened_3.txt",
# sep='\t', mode='a')



print(df.head(4))
#print(df_mmu.iloc[:, [0]])
#print(df_mmu.describe())