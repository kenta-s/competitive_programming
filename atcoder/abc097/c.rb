s = gets.chomp.chars
k = gets.to_i

str = s[0,k].join
last = nil
s.size.times do |i|
  tmp = s[i, k].join
  if tmp.length < k
    last = s[i, k].join
    break
  end
  str = tmp < str ? tmp : str
end

def create_cands(str)
  cands = []
  chars = str.chars
  while first = chars.shift
    cands << first
    chars.size.times do |i|
      if cands[-1]
        cands << cands[-1] + chars[i]
      else
        cands << chars[i]
      end
    end
  end
  cands.uniq!
  cands.sort
end

if last && last < str
  if a = create_cands(last)[k-1]
    ans = a
  else
    ans = create_cands(str)[k-1]
  end
else
  ans = create_cands(str)[k-1]
end

puts ans
