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