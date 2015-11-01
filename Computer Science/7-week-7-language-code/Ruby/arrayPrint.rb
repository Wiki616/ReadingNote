test_data = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
for c in 0..3
	puts "start to print"
	test_data[(c*4)..(c*4+3)].each { |i| puts i}
end	

test_data.each_slice(4) { |i| puts "start to print" + i.to_s}