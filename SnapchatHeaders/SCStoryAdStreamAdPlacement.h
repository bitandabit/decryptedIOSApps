//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSnapAdsAdPlacement-Protocol.h"

@class NSString, SCStoryAdStream;

@interface SCStoryAdStreamAdPlacement : NSObject <SCSnapAdsAdPlacement>
{
    long long _position;
    SCStoryAdStream *_stream;
    NSString *_adRequestClientId;
}

@property(retain, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(retain, nonatomic) SCStoryAdStream *stream; // @synthesize stream=_stream;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)targetingParams;
- (id)key;
- (id)adUnitId;
- (id)initWithStream:(id)arg1 withPosition:(long long)arg2 adRequestClientId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

