//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCManagedLensProcessorState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool detectingCategory;
@property(readonly, nonatomic) unsigned long long coreState;
@property(readonly, nonatomic) _Bool lensesActive;
@property(readonly, nonatomic) _Bool shouldProcessARFrames;
@property(readonly, nonatomic) _Bool shouldMuteAllSounds;
@property(readonly, nonatomic) long long processingMode;
@property(readonly, nonatomic) _Bool audioSessionModeVideoRecording;
@property(readonly, nonatomic) _Bool silentModeActive;
@property(readonly, nonatomic) _Bool audioSessionActive;
@property(readonly, nonatomic) long long inputOrientation;
@property(readonly, nonatomic) float fieldOfView;
@property(readonly, nonatomic) long long aspectRatioDenominator;
@property(readonly, nonatomic) long long aspectRatioNumerator;
@property(readonly, nonatomic) unsigned long long devicePosition;
@end
