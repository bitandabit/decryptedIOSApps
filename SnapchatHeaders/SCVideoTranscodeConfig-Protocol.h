//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCVideoTranscodeConfig <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) unsigned long long codecType;
@property(readonly, nonatomic) long long keyFrameInterval;
@property(readonly, nonatomic) double videoBitrate;
@property(readonly, nonatomic) struct CGSize videoSize;
@end

