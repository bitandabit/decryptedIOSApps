//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSUUID, SCOperaWebViewWrapper;

@interface SCOperaWebViewPreloader : NSObject
{
    NSUUID *_currentUUID;
    SCOperaWebViewWrapper *_currentWrapper;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appWillResignActive:(id)arg1;
- (void)handleMemoryWarning:(id)arg1;
- (id)clear;
- (_Bool)didPreloadFinish;
- (_Bool)didPreloadStart;
- (id)preloadedWrapperForToken:(id)arg1;
- (id)preloadUrl:(id)arg1 withUrlInterceptor:(id)arg2 userInfoProvider:(id)arg3 safeBrowsingChecker:(id)arg4 pkPassProvider:(id)arg5;
- (id)init;

@end

