//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCSecurityProxyCredentialsAPI : NSObject
{
}

+ (void)_getSecurityProxyCredentialsWithEndpoint:(id)arg1 tokenResponseKeyConfig:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)updateCredentialsIfInvalidWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)removeCredentialsWithEndpoint:(id)arg1;
+ (void)updateCredentialsIfInvalidWithEndpoint:(id)arg1 tokenResponseKeyConfig:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end
