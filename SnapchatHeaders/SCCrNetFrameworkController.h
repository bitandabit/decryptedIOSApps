//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface SCCrNetFrameworkController : NSObject
{
    _Bool _isCrNetInstalled;
    CDUnknownBlockType _finalRequestFilerBlock;
    NSSet *_blackListedEndpoints;
    NSSet *_whitelistedHosts;
    NSSet *_blackListedURLs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isServedByCrNet:(id)arg1;
- (void)enableCrNetForSCAPIURLSession:(id)arg1 withNSURLSessionConfiguration:(id)arg2;
- (void)_setupFinalFilterBlock:(CDUnknownBlockType)arg1;
- (void)updateConfiguration;
- (void)installCrNetWithRequestFilterBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
