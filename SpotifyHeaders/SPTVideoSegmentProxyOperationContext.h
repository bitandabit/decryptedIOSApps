//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTVideoSegmentProxySession, SPTVideoURL;

@interface SPTVideoSegmentProxyOperationContext : NSObject
{
    SPTVideoURL *_segmentURL;
    unsigned long long _profileID;
    unsigned long long _segmentIndex;
    SPTVideoSegmentProxySession *_session;
}

@property(retain, nonatomic) SPTVideoSegmentProxySession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) unsigned long long profileID; // @synthesize profileID=_profileID;
@property(retain, nonatomic) SPTVideoURL *segmentURL; // @synthesize segmentURL=_segmentURL;
- (void).cxx_destruct;

@end

