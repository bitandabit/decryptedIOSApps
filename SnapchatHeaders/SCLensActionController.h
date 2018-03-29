//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, SCUserSession;

@interface SCLensActionController : NSObject
{
    SCUserSession *_userSession;
    NSArray *_pinnedLenses;
    NSMutableSet *_lensIdsToPin;
    NSMutableSet *_lensIdsToUnpin;
}

- (void).cxx_destruct;
- (void)submitRequestToEndpoint:(id)arg1 lens:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelRequestToEndpoint:(id)arg1 lens:(id)arg2;
- (void)_updatePinnedLenses:(id)arg1;
- (id)_pinnedLensesIds;
- (void)unpinLens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pinLens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isLensPinned:(id)arg1;
- (unsigned long long)pinnedLensesCount;
- (id)initWithUserSession:(id)arg1;

@end

