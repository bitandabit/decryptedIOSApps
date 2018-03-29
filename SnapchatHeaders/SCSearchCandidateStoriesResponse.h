//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate, SCR2GetCandidateStoriesRequest;

@interface SCSearchCandidateStoriesResponse : NSObject <NSCopying, NSCoding>
{
    SCR2GetCandidateStoriesRequest *_request;
    NSArray *_topics;
    NSDate *_timestamp;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(readonly, copy, nonatomic) SCR2GetCandidateStoriesRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 topics:(id)arg2 timestamp:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

