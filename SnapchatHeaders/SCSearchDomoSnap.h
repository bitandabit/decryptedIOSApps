//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchDomoSnapContextInfo, SCSearchDomoSnapGcsInfo, SCSearchDomoSnapMediaInfo, SCSearchDomoSnapRenderingInfo, SCSearchDomoSnapTrainingInfo;

@interface SCSearchDomoSnap : NSObject <NSCopying>
{
    NSString *_domoSnapId;
    SCSearchDomoSnapMediaInfo *_snapInfo;
    SCSearchDomoSnapGcsInfo *_gcsInfo;
    SCSearchDomoSnapContextInfo *_contextInfo;
    SCSearchDomoSnapTrainingInfo *_trainingInfo;
    long long _mediaFormat;
    SCSearchDomoSnapRenderingInfo *_renderingInfo;
}

@property(readonly, copy, nonatomic) SCSearchDomoSnapRenderingInfo *renderingInfo; // @synthesize renderingInfo=_renderingInfo;
@property(readonly, nonatomic) long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(readonly, copy, nonatomic) SCSearchDomoSnapTrainingInfo *trainingInfo; // @synthesize trainingInfo=_trainingInfo;
@property(readonly, copy, nonatomic) SCSearchDomoSnapContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(readonly, copy, nonatomic) SCSearchDomoSnapGcsInfo *gcsInfo; // @synthesize gcsInfo=_gcsInfo;
@property(readonly, copy, nonatomic) SCSearchDomoSnapMediaInfo *snapInfo; // @synthesize snapInfo=_snapInfo;
@property(readonly, copy, nonatomic) NSString *domoSnapId; // @synthesize domoSnapId=_domoSnapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDomoSnapId:(id)arg1 snapInfo:(id)arg2 gcsInfo:(id)arg3 contextInfo:(id)arg4 trainingInfo:(id)arg5 mediaFormat:(long long)arg6 renderingInfo:(id)arg7;

@end
