//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FNFAssetResourceLoadingDataRequest : NSObject
{
    CDUnknownBlockType _sendDataCallback;
    _Bool _bypassCache;
    _Bool _enablePrefetchLookupWhenBypassCache;
    _Bool _isAudio;
    _Bool _firstRequest;
    _Bool _isForDiskCache;
    long long _requestedOffset;
    long long _requestedLength;
    long long _currentOffset;
}

@property(nonatomic) _Bool isForDiskCache; // @synthesize isForDiskCache=_isForDiskCache;
@property(nonatomic) _Bool firstRequest; // @synthesize firstRequest=_firstRequest;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(nonatomic) _Bool enablePrefetchLookupWhenBypassCache; // @synthesize enablePrefetchLookupWhenBypassCache=_enablePrefetchLookupWhenBypassCache;
@property(nonatomic) _Bool bypassCache; // @synthesize bypassCache=_bypassCache;
@property(readonly, nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) long long requestedLength; // @synthesize requestedLength=_requestedLength;
@property(readonly, nonatomic) long long requestedOffset; // @synthesize requestedOffset=_requestedOffset;
- (void).cxx_destruct;
- (void)respondWithData:(id)arg1;
- (id)initWithRequestedOffset:(long long)arg1 requestedLength:(long long)arg2 dataCallback:(CDUnknownBlockType)arg3;

@end

