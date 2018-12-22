n = gets.to_i

nums = (3..9).map do |i|
  [7,5,3].repeated_permutation(i).map(&:join)
end.flatten

t = nums.select{|num| num.to_i <= n && (["7", "5", "3"] - num.chars).empty?}
puts t.length
