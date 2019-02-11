n, y = gets.split(" ").map(&:to_i)

(0..n).each do |i|
  (0..n).each do |j|
    if i + j <= n && ((i * 10000) + (j * 5000) + (n - i - j) * 1000) == y
      puts "#{i} #{j} #{n - i - j}"
      exit
    end
  end
end

puts "-1 -1 -1"
