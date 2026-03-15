#include <stdio.h>

int main(){
  //2D array
  int matrix[2][3]={{1,4,2},{3,6,8}};
  matrix[0][0]=9; //we can change the value in matrix as well
  for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      printf("%d\n",matrix[i][j]);
    }
  } //method to loop in the value of the matrix

  //input a matrix
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      printf("%d ",mat[x][y]);
    }
    printf("\n");
  }
  //taking the input of matrix and printing it 
  
  //printing the sum of matrix
  
  int matrix1[3][3]={{1,2,9},{3,4,10},{11,12,13}};
  int matrix2[3][3]={{5,6,14},{7,8,15},{16,17,18}};
  int resultMat[3][3];
  for(int o=0;o<3;o++){
    for(int p=0;p<3;p++){
      resultMat[o][p]=matrix1[o][p]+matrix2[o][p];
    }
  }
  for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
      printf("%d ",resultMat[k][l]);
    }
    printf("\n");
  }

  //subtraction logic is literally the same 
  
  //row wise matrix
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      printf("%d ",mat[x][y]);
    }
  }

  //col wise
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      printf("%d\n",mat[x][y]);
    }
  }

  //printing the diagonal elements
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      if(x==y){
      printf("%d ",mat[x][y]);
      }
    }
    printf("\n");
  }
  
  //printing anti diagonal elements
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      if(x!=y){
      printf("%d ",mat[x][y]);
      }
    }
    printf("\n"); 
  }

  //printing the boundary elements
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      if(x==0 || x==row-1 ||y==0 ||y==cols-1){
      printf("%d ",mat[x][y]);
      }
    }
    printf("\n");
  }

  //finding the largest no from matrix
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }
  
  int largest=mat[0][0];
  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      if(largest<mat[x][y]){
      largest=mat[x][y];
    }
    }
  }
  printf("%d",largest);

  //Transpose of matrix
  int row,cols;
  printf("Enter the no of rows and coloumns\n");
  scanf("%d %d",&row,&cols);
  int mat[row][cols],trans[cols][row];
  for(int a=0;a<row;a++){
    for(int b=0;b<cols;b++){
      scanf("%d",&mat[a][b]);
    }
  }

  for(int x=0;x<row;x++){
    for (int y=0;y<cols;y++){
      trans[y][x]=mat[x][y];
    }
  }

  for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
      printf("%d ",trans[i][j]);
    }
    printf("\n");
  }

  return 0;
}   