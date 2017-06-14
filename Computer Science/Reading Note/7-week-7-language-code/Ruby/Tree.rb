class Tree
	attr_accessor :children, :node_name
	
	def initialize(tree={})
		keys = tree.keys
		if keys.count == 1
			@node_name = keys[0]
			@children = tree[keys[0]].keys.collect {|k| Tree.new({k => tree[keys[0]][k]})}
		end	
	end
	
	def visit_all(&block)
		visit &block
		children.each { |c| c.visit_all &block}
	end
	
	def visit(&block)
		block.call self
	end
end

dict = {'grandpa' => {'dad' => {'child1' => {} , 'child2' =>{}}, 'uncle' => {'child3' => {}, 'child4' => {}}}}

ruby_tree = Tree.new(dict)

puts "Visiting a node"
ruby_tree.visit {|node| puts node.node_name}
puts

puts "visiting entire tree"
ruby_tree.visit_all {|node| puts node.node_name}
