//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SCSnapcodeManager : NSObject
{
    NSMutableDictionary *_snapcodesByUsername;
    NSMutableDictionary *_snapcodesByUnlockableId;
}

+ (id)imageFromData:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3 withString:(id)arg4;
- (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3;
- (void)dispatchCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 success:(_Bool)arg3 withData:(id)arg4;
- (_Bool)containsSnapcodeForSnaptagUrl:(id)arg1;
- (_Bool)containsSnapcodeForUsername:(id)arg1;
- (void)removeAllWithCompletionBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)removeSnapcodeForSnaptagUrl:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)removeSnapcodeForUsername:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)fetchSnapcodeForUnlockableId:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)fetchSnapcodeForUsername:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchSnapcodeFromServerWithName:(id)arg1 id:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_saveSnapcodeToCache:(id)arg1 userName:(id)arg2 userInfo:(id)arg3 completionQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)setSnapcodeForUnlockables:(id)arg1 snapcodeUuid:(id)arg2 version:(id)arg3;
- (id)unlockableIdToSnapcode:(id)arg1;
- (void)setSnaptagForUsername:(id)arg1 newTag:(id)arg2;
- (id)usernameToSnaptag:(id)arg1;
- (id)usernameToUserId:(id)arg1;

@end

