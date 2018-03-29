//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GNSDSSSEncoding, GNSDTMFEncoding, NSData;

@interface GNSTokenBroadcasterParams : NSObject
{
    float _volume;
    NSData *_token;
    GNSDSSSEncoding *_dsssEncoding;
    GNSDTMFEncoding *_dtmfEncoding;
}

@property(retain, nonatomic) GNSDTMFEncoding *dtmfEncoding; // @synthesize dtmfEncoding=_dtmfEncoding;
@property(retain, nonatomic) GNSDSSSEncoding *dsssEncoding; // @synthesize dsssEncoding=_dsssEncoding;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

