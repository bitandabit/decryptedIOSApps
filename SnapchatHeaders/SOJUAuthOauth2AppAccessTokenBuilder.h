//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUAuthOauth2AppAccessTokenBuilder : NSObject
{
    NSString *_value;
    NSArray *_scopes;
    NSNumber *_expiresAtSeconds;
    NSString *_userId;
}

+ (id)withJUAuthOauth2AppAccessToken:(id)arg1;
- (void).cxx_destruct;
- (id)setUserId:(id)arg1;
- (id)setExpiresAtSeconds:(id)arg1;
- (id)setScopes:(id)arg1;
- (id)setValue:(id)arg1;
- (id)build;
- (id)setExpiresAtSecondsValue:(long long)arg1;

@end

