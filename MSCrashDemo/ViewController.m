//
//  ViewController.m
//  MSCrashDemo
//
//  Created by J on 2017/2/26.
//  Copyright © 2017年 J. All rights reserved.
//

#import "ViewController.h"

#import "NSArray+MSSafe.h"
#import "NSDictionary+MSSafe.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    //NSArray
    NSArray* arr = @[@"1"];
    [arr objectAtIndexSafe:10];
    id obj = [arr objectAtIndex:0 kindOfClass:[NSString class]];
    NSLog(@"@%@",obj);
    
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
    

}

- (void)viewDidLoad {
    [super viewDidLoad];

}

@end
