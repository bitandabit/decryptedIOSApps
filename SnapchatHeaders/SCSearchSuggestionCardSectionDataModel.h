//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchQuery;

@interface SCSearchSuggestionCardSectionDataModel : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    NSString *_resultContentIdentifier;
    long long _sectionType;
    NSArray *_suggestionCards;
}

@property(readonly, copy, nonatomic) NSArray *suggestionCards; // @synthesize suggestionCards=_suggestionCards;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *resultContentIdentifier; // @synthesize resultContentIdentifier=_resultContentIdentifier;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1 resultContentIdentifier:(id)arg2 sectionType:(long long)arg3 suggestionCards:(id)arg4;

@end
