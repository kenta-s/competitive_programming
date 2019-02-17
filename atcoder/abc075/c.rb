n,m = gets.split(" ").map(&:to_i)
as = []
n.times do
  as << gets.split(" ").map(&:to_i)
end

graph = []

def reset_g(graph, as, n)
  (0...n).each do |i|
    (0...n).each do |j|
      graph[i] ||= []
      graph[i][j] = 0
    end
  end
  
  as.each do |a|
    graph[a[0]-1][a[1]-1] = 1
    graph[a[1-1]][a[0]-1] = 1
  end
  graph
end

visited = {}

def reset_v(visited, n)
  (1..n).each do |i|
    visited[i] = false
  end
  visited
end

def dfs(current, tmp_g, visited)
  return if visited[current]
  visited[current] = true
  tmp_g[current-1].each.with_index(1) do |node,i|
    if node == 1
      dfs(i, tmp_g, visited)
    end
  end
end

ans = 0
n.times do |i|
  tmp_g = reset_g([], as, n)
  visited = reset_v(visited, n)

  a = as[i]
  tmp_g[a[0] - 1][a[1] -1] = 0
  tmp_g[a[1] - 1][a[0] -1] = 0
  dfs(i+1, tmp_g, visited)
  p "i: #{i}, v: #{visited}"
  flg = false
  n.times do |j|
    if !flg && !visited[j+1]
      flg = true
      ans += 1
    end
  end
end


puts ans
require 'irb'
binding.irb
