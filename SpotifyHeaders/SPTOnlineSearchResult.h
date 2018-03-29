//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchResult.h"

@class NSData, NSString;

@interface SPTOnlineSearchResult : NSObject <SPTSearchResult>
{
    NSData *_results;
    unsigned long long _resultsType;
}

@property(readonly, nonatomic) unsigned long long resultsType; // @synthesize resultsType=_resultsType;
@property(readonly, copy, nonatomic) NSData *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)applyToViewModelBuilder:(id)arg1 withViewURI:(id)arg2 query:(id)arg3;
- (id)initWithResults:(id)arg1 resultsType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
