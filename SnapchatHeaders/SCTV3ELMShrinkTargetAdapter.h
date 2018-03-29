//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTV3ELMShrinkTarget-Protocol.h"

@class NSString;

@interface SCTV3ELMShrinkTargetAdapter : NSObject <SCTV3ELMShrinkTarget>
{
    CDUnknownBlockType _measureBlock;
    CDUnknownBlockType _reattachBlock;
}

- (void).cxx_destruct;
- (id)shrunkLocalMediaMeasurements;
- (void)reattachLocalMediaViewAfterShrinking;
- (id)initWithMeasureBlock:(CDUnknownBlockType)arg1 reattachBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

