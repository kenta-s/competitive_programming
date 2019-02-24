n = gets.to_i
as = gets.split(" ").map(&:to_i)

sum = as.reduce(0){|a,e|a+=e}
sunuke_sum = as[0]
a_sum = sum - sunuke_sum
min = (sunuke_sum - a_sum).abs

(1...(n-1)).each do |i|
  sunuke_sum = sunuke_sum + as[i]
  araiguma_sum = sum - sunuke_sum
  min = [min, (sunuke_sum - araiguma_sum).abs].min
end

puts min
