# MSCrashProtector


An Global protection scheme..


## Installation

### Cocoapods(Recommended)

1. Add `pod 'MSCrashProtector'` to your Podfile.
2. Run `pod install`

### Manual

1. Add all files under `MSCrashProtector` to your project

## Requirements

- iOS 5.0 and greater
- ARC/MRC


## How To Use
  
### Objective-C

```objc   

    #import "MSCrashProtector.h"
```


```objc
        
    //NSArray
    NSArray* arr = @[@"1"];
    [arr objectAtIndexSafe:10];
    id obj = [arr objectAtIndex:0 kindOfClass:[NSString class]];
    NSLog(@"%@",obj);
    
    //NSMutableArray
    NSMutableArray* marr = [NSMutableArray array];
    [marr addObjectSafe:nil];
    [marr removeObjectAtIndexInBoundary:100];
    [marr insertObject:@111 atIndexInBoundary:100];

    
    //NSDictionary
    NSDictionary* dic = [NSDictionary dictionary];
    [dic objectForKey:nil defaultValue:@"test"];

    //NSMutableDictionary
    NSMutableDictionary* mdic = [NSMutableDictionary dictionary];
    [mdic setObjectSafe:nil forKey:nil];
    
```


## Credits

MSCrashProtector was created by [Jiang.Zijia](https://github.com/JZJJZJ) in the development of [MOMO](https://www.immomo.com).

## License

MSCrashProtector is available under the MIT license. See the LICENSE file for more info.
