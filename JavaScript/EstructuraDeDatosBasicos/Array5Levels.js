let myNestedArray = [
    // nivel 1
    ['unshift', false, 1, 2, 3, 'complex', 'nested', 
      // nivel 2
      ['deep', 
        // nivel 3
        ['deeper', 
          // nivel 4
          ['deepest']
        ]
      ]
    ],
    // nivel 1
    ['loop', 'shift', 6, 7, 1000, 'method'],
    // nivel 1
    ['concat', false, true, 'spread', 'array'],
    // nivel 1
    ['mutate', 1327.98, 'splice', 'slice', 'push'],
    // nivel 1
    ['iterate', 1.3849, 7, '8.4876', 'arbitrary', 'depth']
  ];
  
  console.log(myNestedArray[0][7][1][1][0])

// Output : deepest