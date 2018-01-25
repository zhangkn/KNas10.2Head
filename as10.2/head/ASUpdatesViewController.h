//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIItemCollectionDelegate-Protocol.h"
#import "SKUIItemStateCenterObserver-Protocol.h"
#import "SKUILayoutCacheDelegate-Protocol.h"
#import "SKUIViewControllerTesting-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ASDSoftwareUpdatesStore, ASUpdatesPage, NSMutableSet, NSString, SKUIItemCollectionController, SKUILayoutCache, UIAlertView, UIColor, UITableView;

@interface ASUpdatesViewController : SKUIViewController <SKUIItemCollectionDelegate, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIViewControllerTesting, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    ASDSoftwareUpdatesStore *_appstoredSoftwareUpdatesStore;
    UIAlertView *_autoUpdatesAlertView;
    UIColor *_borderColor;
    NSMutableSet *_expandedUpdateItems;
    _Bool _isLoading;
    _Bool _isPad;
    SKUIItemCollectionController *_itemCollectionController;
    NSString *_performanceTestName;
    SKUILayoutCache *_layoutCache;
    _Bool _showsPurchasedPageLink;
    UITableView *_tableView;
    _Bool _updateAllInProgress;
    ASUpdatesPage *_updatesPage;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)_willDisplayUpdateCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_updateCellForIndexPath:(id)arg1;
- (void)_updateBadgeCount:(long long)arg1;
- (id)_updatableItems;
- (id)_textLayoutRequestForText:(id)arg1;
- (id)_tableView;
- (void)_showProductPageForItem:(id)arg1;
- (void)_setSoftwareUpdatesPageWithUpdates:(id)arg1 fromCache:(_Bool)arg2;
- (struct _NSRange)_sectionsRangeForUpdateItems;
- (void)_reloadTableView;
- (void)_reloadForItemStateChanges:(id)arg1;
- (void)_reloadData;
- (void)_reloadBarsDisableUpdateAll:(_Bool)arg1 isCompact:(_Bool)arg2;
- (void)_reloadBarsDisableUpdateAll:(_Bool)arg1;
- (void)_reloadBarsIsCompact:(_Bool)arg1;
- (void)_reloadBars;
- (id)_purchasedRowCellForIndexPath:(id)arg1;
- (long long)_itemIndexForIndexPath:(id)arg1;
- (id)_itemForIndexPath:(id)arg1;
- (id)_itemCollectionController;
- (_Bool)_isUpdateAllEnabled;
- (_Bool)_isIndexPathExpanded:(id)arg1;
- (id)_indexPathForItemIndex:(long long)arg1;
- (void)_expandIndexPath:(id)arg1;
- (void)_enableForcedBadgeIfApplicable;
- (void)_displayAutoUpdatesDiscovery;
- (id)_appstoredSoftwareUpdatesStore;
- (void)_updateAllApps;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_updateAllAction:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setTabBarItem:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)reloadData;
- (void)showPurchasedViewController:(_Bool)arg1;
- (void)refreshBadgeCount;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

