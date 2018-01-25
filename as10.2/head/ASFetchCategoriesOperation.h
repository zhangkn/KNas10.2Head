//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ASFetchCategoriesOperationProtocol-Protocol.h"
#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSArray, NSError, NSString;

@interface ASFetchCategoriesOperation : ISOperation <ISStoreURLOperationDelegate, ASFetchCategoriesOperationProtocol>
{
    _Bool _excludesNearby;
    _Bool _excludesArtwork;
    NSArray *_promotedCategories;
    NSArray *_categories;
    NSString *_urlString;
}

@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) _Bool excludesArtwork; // @synthesize excludesArtwork=_excludesArtwork;
@property(readonly, nonatomic) _Bool excludesNearby; // @synthesize excludesNearby=_excludesNearby;
@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, copy, nonatomic) NSArray *promotedCategories; // @synthesize promotedCategories=_promotedCategories;
- (void).cxx_destruct;
- (id)_itemsForResponse:(id)arg1 withContentIds:(id)arg2;
- (id)_categoriesForChildrenArray:(id)arg1 withResponse:(id)arg2;
- (id)_promotedCategoriesForResponse:(id)arg1;
- (id)_categoriesForResponse:(id)arg1;
- (_Bool)_excludesNearbyAppsForResponse:(id)arg1;
- (id)_categoryListUrlString;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (id)initWithUrlString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

