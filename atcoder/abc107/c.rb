n, k = gets.split(" ").map(&:to_i)
xs = gets.split(" ").map(&:to_i)

ans = Float::INFINITY
xs.each_with_index do |x,i|
  a = xs[i, k]
  break if a.size < k
  if a[-1] < 0
    ans = [a[0].abs, ans].min
  elsif 0 < a[0]
    ans = [a[-1].abs, ans].min
  elsif a[0] < 0 && 0 < a[-1]
    l = (a[-1] - a[0]) + a[0].abs
    r = (a[-1] - a[0]) + a[-1].abs
    ans = [l, r, ans].min
  end
end

if ans == Float::INFINITY
  ans = 0
end

puts ans
