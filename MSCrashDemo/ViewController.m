//
//  ViewController.m
//  MSCrashDemo
//
//  Created by J on 2017/2/26.
//  Copyright © 2017年 J. All rights reserved.
//

#import "ViewController.h"
#import "NSArray+MSSafe.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    NSArray* arr = @[@"1"];
    id obj = [arr objectAtIndex:0 kindOfClass:[NSString class]];
    
    NSLog(@"@%@",obj);
}

- (void)viewDidLoad {
    [super viewDidLoad];

}

@end
