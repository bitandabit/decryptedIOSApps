//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol SCPerforming;

@interface SCSummaries : NSObject <NSCoding>
{
    NSMutableDictionary *_mutableUrlSummaryDictionary;
    NSMutableDictionary *_mutableAddressSummaryDictionary;
    NSMutableArray *_urlLinks;
    NSMutableArray *_phoneNumbers;
    id <SCPerforming> _addressPerformer;
    NSArray *_mediaCardAttributes;
    NSString *_conversationId;
    NSString *_messageId;
    NSString *_text;
    NSMutableSet *_selectedUrls;
    NSMutableSet *_selectedAddresses;
    NSMutableSet *_selectedPhoneNumbers;
}

@property(readonly, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
- (void).cxx_destruct;
- (_Bool)needPrefetchContent;
- (void)_reportPhoneNumberMediaCardOpenForPhoneNumber:(id)arg1;
- (void)_reportAddressMediaCardOpenForAddress:(id)arg1;
- (void)_reportUrlMediaCardOpenForUrl:(id)arg1;
- (void)reportMediaCardsOpen;
- (void)selectPhoneNumber:(id)arg1;
- (void)selectAddress:(id)arg1;
- (void)selectUrl:(id)arg1;
- (void)detectMediaCardAttributes;
- (void)_fetchAddressMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (id)summaryForAddress:(id)arg1;
@property(readonly, nonatomic) NSDictionary *addressSummaryDictionary;
- (void)_fetchURLMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (void)_fetchURLThumbnailImages:(id)arg1;
- (void)_fetchMediaCardsWithUrls:(id)arg1 credentials:(id)arg2 userSession:(id)arg3;
- (id)summaryForURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *urlSummaryDictionary;
- (void)fetchMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)_resetSelectedMediaCards;
- (void)_initSummaries;
- (id)initWithText:(id)arg1 mediaCardAttributes:(id)arg2 conversationId:(id)arg3 messageId:(id)arg4;
- (id)initWithText:(id)arg1 conversationId:(id)arg2 messageId:(id)arg3;

@end

