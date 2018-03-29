//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchResultsDecorator.h"

@class NSString;

@interface SPTSearchResultsRadioDecorator : NSObject <SPTSearchResultsDecorator>
{
    long long _recommendedSectionIndex;
}

@property(nonatomic) long long recommendedSectionIndex; // @synthesize recommendedSectionIndex=_recommendedSectionIndex;
- (_Bool)skipTitleForSectionAtIndex:(unsigned long long)arg1;
- (_Bool)skipAllRowsInSection:(long long)arg1;
- (_Bool)skipFooterInSection:(long long)arg1;
- (_Bool)skipHeaderInSection:(long long)arg1;
- (_Bool)skipValueForSection:(long long)arg1;
- (void)updateIndexesWithSearchResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

