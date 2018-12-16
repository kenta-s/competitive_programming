n, x = gets.chomp.split(" ").map(&:to_i)

$layer = {}
def burger_layer(level)
  return $layer[level] if $layer[level]
  return $layer[level] = 1 if level.zero?
  $layer[level] = 2 * burger_layer(level - 1) + 3
end

$p_count = {}
def p_count(level)
  return $p_count[level] if $p_count[level]
  return $p_count[level] = 1 if level.zero?
  $p_count[level] = 2 * p_count(level - 1) + 1
end

def ans(n, x)
  if x <= 1
    return n.zero? ? 1 : 0
  elsif x == burger_layer(n)
    return p_count(n)
  elsif x == burger_layer(n - 1)
    return p_count(n - 1)
  elsif x <= 1 + burger_layer(n - 1)
    return ans(n-1, x-1)
  elsif x == 2 + burger_layer(n - 1)
    return p_count(n - 1) + 1
  elsif x > 2 + burger_layer(n - 1)
    return ans(n-1, burger_layer(n-1)) + 1 + ans(n-1, x-burger_layer(n-1)-2)
  end
end

puts ans(n, x)
