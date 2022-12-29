import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import matplotlib as mpl

df = pd.read_csv(r"C:\Users\Notandi\Dropbox\Skólinn\Tölvunarfræði\2022-haust\Tolvutaekni\Verkefni 2\complete_df.txt", sep='\t')

df = df.drop(df.columns[[0, 3, 4]], axis=1)

#print(df.head(3))

df = df.pivot(index='s', columns='ls misses', values='b')