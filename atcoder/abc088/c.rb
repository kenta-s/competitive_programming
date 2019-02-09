grid = []
3.times do
  grid << gets.split(" ").map(&:to_i)
end

ans = "Yes"

2.times do |i|
  row = grid[i]
  nextrow = grid[i+1]
  tmp1 = row[0] - nextrow[0]
  tmp2 = row[1] - nextrow[1]
  tmp3 = row[2] - nextrow[2]
  if !(tmp1 == tmp2 && tmp1 == tmp3)
    ans = "No" 
    break
  end
end

2.times do |i|
  grid = grid.transpose
  row = grid[i]
  nextrow = grid[i+1]
  tmp1 = row[0] - nextrow[0]
  tmp2 = row[1] - nextrow[1]
  tmp3 = row[2] - nextrow[2]
  if !(tmp1 == tmp2 && tmp1 == tmp3)
    ans = "No" 
    break
  end
end

puts ans
