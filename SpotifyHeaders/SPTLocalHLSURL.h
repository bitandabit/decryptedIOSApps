//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTLocalHLSURL : NSObject
{
    unsigned long long _type;
    unsigned long long _profileID;
    unsigned long long _segmentIndex;
}

+ (id)localHLSURLForProfileID:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
+ (id)localHLSURLForSubtitleProfileID:(unsigned long long)arg1;
+ (id)localHLSURLForProfileID:(unsigned long long)arg1;
+ (id)localHLSMasterURL;
@property(readonly, nonatomic) unsigned long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) unsigned long long profileID; // @synthesize profileID=_profileID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)absoluteString;
- (id)url;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 profileID:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;

@end

