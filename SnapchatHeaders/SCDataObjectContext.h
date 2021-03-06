//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCDataObjectContext : NSObject
{
}

+ (id)sharedContextFor:(id)arg1;
- (id)diskUsageReport;
- (void)unobserve:(id)arg1 objectClass:(Class)arg2 objectID:(id)arg3;
- (id)observe:(Class)arg1 object:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void)dispatchOnceWithToken:(long long *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)isInsidePerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)destroyPersistentStore;
- (void)installPersistentStore;
@property(readonly, copy, nonatomic) NSString *contextName;
- (id)diskFileURL;

@end

