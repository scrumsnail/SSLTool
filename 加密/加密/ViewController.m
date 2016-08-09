//
//  ViewController.m
//  加密
//
//  Created by allthings_LuYD on 16/8/9.
//  Copyright © 2016年 scrum_snail. All rights reserved.
//

#import "ViewController.h"
#import "NSString+SSLTool.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    NSString *str = @"1234567890";
    NSLog(@"base64----%@",[[str doBase64] decodeBase64]);
    NSLog(@"MD516------%@",[[str do16MD5] decodeBase64]);
    NSLog(@"MD532-------%@",[str do32MD5]);
    NSLog(@"sha1---------%@",[str doSha1]);
}

@end
