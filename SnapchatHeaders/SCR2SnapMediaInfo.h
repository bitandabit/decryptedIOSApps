//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTOneSnapInfo, SCMTStreamingMediaInfo;

@interface SCR2SnapMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasStreamingSnapInfo; // @dynamic hasStreamingSnapInfo;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(nonatomic) _Bool isZipped; // @dynamic isZipped;
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(copy, nonatomic) NSString *mediaIv; // @dynamic mediaIv;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) SCMTOneSnapInfo *streamingSnapInfo; // @dynamic streamingSnapInfo;

@end

