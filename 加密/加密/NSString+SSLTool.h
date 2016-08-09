//
//  NSString+SSLTool.h
//  加密
//
//  Created by allthings_LuYD on 16/8/9.
//  Copyright © 2016年 scrum_snail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SSLTool)

/**
 * 32位MD5加密
 * 32 bit MD5 encryption
 */
- (NSString *)do32MD5;

/**
 * 16位MD5加密
 * 16 bit MD5 encryption
 */
- (NSString *)do16MD5;

/**
 * Sha1加密
 * Sha1 encryption
 */
- (NSString *)doSha1;

/**
 * base64加密
 * base64 encryption
 */
- (NSString *)doBase64;

/**
 * base64解密
 * Base64 decryption
 */
- (NSString *)decodeBase64;

@end
