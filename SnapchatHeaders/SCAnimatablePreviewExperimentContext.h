//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAnimatablePreviewExperimentContext : SCExperimentContext
{
    _Bool _enable;
    _Bool _enableStickerInChat;
    long long _outputMaxSize;
    long long _outputFrameRate;
    long long _outputBitrate;
    double _outputDuration;
}

@property(nonatomic) double outputDuration; // @synthesize outputDuration=_outputDuration;
@property(nonatomic) long long outputBitrate; // @synthesize outputBitrate=_outputBitrate;
@property(nonatomic) long long outputFrameRate; // @synthesize outputFrameRate=_outputFrameRate;
@property(nonatomic) long long outputMaxSize; // @synthesize outputMaxSize=_outputMaxSize;
@property(nonatomic) _Bool enableStickerInChat; // @synthesize enableStickerInChat=_enableStickerInChat;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)setupParameters;
- (id)experimentName;

@end

