abc = gets.split(" ").map(&:to_i)

def check(abc, count=0)
  return count if abc[0] == abc[1] && abc[0] == abc[2]
  if abc.count(abc.min) == 2
    abc = abc.map do |a|
      if a == abc.min
        a+1
      else
        a
      end
    end
  else
    abc = abc.map do |a|
      if a == abc.min
        a+2
      else
        a
      end
    end
  end
  count += 1
  check(abc, count)
end

puts check(abc)
