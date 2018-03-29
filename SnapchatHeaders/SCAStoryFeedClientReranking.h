//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAFeedEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStoryFeedClientReranking : SCAFeedEventBase <MapSerializable, NSCopying>
{
    NSNumber *rerankingId;
    NSString *streamId;
    NSString *clientModelId;
    NSString *clientReranking;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getClientReranking;
- (void)setClientReranking:(id)arg1;
- (id)getClientModelId;
- (void)setClientModelId:(id)arg1;
- (id)getStreamId;
- (void)setStreamId:(id)arg1;
- (long long)getRerankingId;
- (void)setRerankingId:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

