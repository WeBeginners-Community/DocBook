 Graph Coloring Problem :

 We have been given a graph and we are asked to color all vertices with the ‘M’ number of given colors, in such a way that no two adjacent vertices should have the same color.
 
![image](https://user-images.githubusercontent.com/98210740/217501773-ae5422a0-7c69-46c7-919c-dc905219394f.png)

 It it is possible to color all the vertices with the given colors then we have to output the colored result, otherwise output ‘no solution possible’.
The least possible value of ‘m’ required to color the graph successfully is known as the chromatic number of the given graph.

Graph Coloring Solution Using Backtracking Algorithm

The backtracking algorithm makes the process efficient by avoiding many bad decisions made in naïve approaches.

In this approach, we color a single vertex and then move to its adjacent (connected) vertex to color it with different color.

After coloring, we again move to another adjacent vertex that is uncolored and repeat the process until all vertices of the given graph are colored.

In case, we find a vertex that has all adjacent vertices colored and no color is left to make it color different, we backtrack and change the color of the last colored vertices and again proceed further.

If by backtracking, we come back to the same vertex from where we started and all colors were tried on it, then it means the given number of colors (i.e. ‘m’) is insufficient to color the given graph and we require more colors (i.e. a bigger chromatic number).

![image](https://user-images.githubusercontent.com/98210740/217501907-2ab56d51-bc42-4f5f-86ee-99534b5b89e9.png)

Steps To color graph using the Backtracking Algorithm:

1. Different colors:
   A.Confirm whether it is valid to color the current vertex with the current color (by checking whether any of its adjacent vertices are colored with the same color).
   B.If yes then color it and otherwise try a different color.
   C.Check if all vertices are colored or not.
   D.If not then move to the next adjacent uncolored vertex.
2.If no other color is available then backtrack (i.e. un-color last colored vertex).
  Here backtracking means to stop further recursive calls on adjacent vertices by returning false. In this algorithm Step-1.2 (Continue) and Step-2 (backtracking) is causing the program to try 
  different color option.
  Continue – try a different color for current vertex.
  Continue – try a different color for current vertex.

Here is the solution to the graph coloring problem in Java using the backtracking algorithm:

import java.util.ArrayList;
import java.util.List;

class Vertex {
  String name;
  List<Vertex> adjacentVertices;
  boolean colored;
  String color;

  public Vertex(String name) {
    this.name = name;
    this.adjacentVertices = new ArrayList<>();
    this.colored =false;
    this.color = "";
  }

  public void addNeighbor(Vertex vertex){
    this.adjacentVertices.add(vertex);
    vertex.adjacentVertices.add(this);
  }
}

class Coloring {
  String colors[];
  int colorCount;
  int numberOfVertices;

  public Coloring(String[] colors, int N) {
    this.colors = colors;
    this.numberOfVertices = N;
  }

  public boolean setColors(Vertex vertex){
    
    for(int colorIndex=0; colorIndex<colors.length; colorIndex++){ 
       
      if(!canColorWith(colorIndex, vertex)) 
        continue; 

      
      vertex.color=colors[colorIndex]; 
      vertex.colored=true; 
      colorCount++; 

       
      if(colorCount== numberOfVertices)  
        return true; 

      
      for(Vertex nbrvertex: vertex.adjacentVertices){ 
        if (!nbrvertex.colored){ 
          if(setColors(nbrvertex))
            return true;
          } 
      }

    }
      
     
    vertex.colored = false;
    vertex.color = "";
    return false;
  } 

   
  boolean canColorWith(int colorIndex, Vertex vertex) {
    for(Vertex nbrvertex: vertex.adjacentVertices){
      if(nbrvertex.colored && nbrvertex.color.equals(colors[colorIndex]))
        return  false;
    }
    return true;
  }
}
                    
public class Graph{
  public static void main(String args[]){ 
     
    Vertex vertices[]= {new Vertex("A"), new Vertex("B"), new Vertex("C"), new Vertex("D")};

     
    vertices[0].addNeighbor(vertices[1]);
    vertices[1].addNeighbor(vertices[2]);
    vertices[2].addNeighbor(vertices[3]);
    vertices[0].addNeighbor(vertices[3]);

     
    String colors[] = {"Green","Blue"};

     
    Coloring coloring = new Coloring(colors, vertices.length);

     
    boolean hasSolution = coloring.setColors(vertices[0]);

    
    if (!hasSolution)
        System.out.println("No Solution");
    else {
        for (Vertex vertex: vertices){
            System.out.println(vertex.name + " "+ vertex.color +"\n");
        }
    }
  }
}

Output-

![image](https://user-images.githubusercontent.com/98210740/217502149-9d5b9be7-1d36-45f8-9984-3632096b1b37.png)
