import matplotlib.pyplot as plt
import matplotlib.gridspec as grindspec

datos1=[108,31,75,87,79,88,89,118,51,89,174,95,51,70,73]
datos2=[108,31,75,87,79,88,89,118,51,89,174,95,51,70,73]

datos= [datos1,datos2]

#aqui va algo

gs = grindspec.GridSpec(2,2)
figure = plt.figure(figsize=(12,7))

ax = figure.add_subplot(gs[0,:])
bp=ax.boxplot(datos,
              patch_artist=true,
              vert=false,
              labels=["Graica 1","graica 2"])
ax.set_title("boxplot deault")

color= ['lime','blue']
for patch, color in zip(bp['boxes'],color):
    pass