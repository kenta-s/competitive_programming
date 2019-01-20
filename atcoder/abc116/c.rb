n = gets.to_i
hs = gets.split(" ").map(&:to_i)
count = 0

array = Array.new([])
i = 0
hs.each do |h|
  if h == 0
    i += 1
  else
    array[i] ||= []
    array[i] << h
  end
end

while !array.empty
  new_array = []
  array.each do |ar|
    new_array << ar.map{|a| a - 1}
    count += 1
  end
  array = new_array
end

require 'irb'
binding.irb
