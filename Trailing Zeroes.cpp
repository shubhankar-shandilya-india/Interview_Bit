int Solution::solve(int x) {
      int count = 0; 
  while ((x & 1) == 0) 
  { 
      x = x >> 1; 
      count++; 
  } 
  return count; 
    
}