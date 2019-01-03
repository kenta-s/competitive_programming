d, g = gets.split(" ").map(&:to_i)

ps = []
max_p = 0
d.times do |i|
  p, c = gets.split(" ").map(&:to_i)
  ps << [p, c]
  max_p = [max_p, p].max
end

dp = []

ps.each.with_index do |p, i|
  dp[i] = Array.new(max_p, 0)
  max_p.times do |j|
    if p[0] < j+1
      dp[i][j] = dp[i][j-1]
    else
      bonus = j+1 == p[0] ? p[1] : 0
      point = ((i+1) * (j+1) * 100) + bonus
      if i > 0
        dp[i][j] = [dp[i-1][j], point].max
      else
        dp[i][j] = point
      end
    end
  end
end

if dp[-1][max_p-1] < g
else
  dp.size.times do |i|
    dp[i].size.times do |j|
      if dp[i][j] >= g
        puts j+1
        exit
      end
    end
  end
  
end
# 100.times do |i|
#   dp[i] ||= []
#   ps.each_with_index do |p, j|
# 
#     if i+1 > p[1]
#       point = 0
#     elsif p[1] == (i+1)
#       point = ((j+1) * 100) + p[2]
#     else
#       point = ((j+1) * 100)
#     end
# 
#     if i == 0
#       dp[i][j] = point
#     else
#       if j == 0
#         dp[i][j] = dp[i-1][j] + point
#       else
#         dp[i][j] = dp[i-1][-1]
#         dp[i][j] = [dp[i-1][j-1], dp[i-1][j]].max + point
#       end
#     end
# 
#     if dp[i][j] >= g
#       puts i+1
#       exit
#     end
#   end
# end
#
require 'irb'
binding.irb
