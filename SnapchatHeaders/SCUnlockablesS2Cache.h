//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCCache;

@interface SCUnlockablesS2Cache : NSObject
{
    SCCache *_scCache;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)getUnlockablesForCellToken:(id)arg1;
- (void)saveUnlockablesForCellToken:(id)arg1 cellData:(id)arg2;
- (id)init;

@end

